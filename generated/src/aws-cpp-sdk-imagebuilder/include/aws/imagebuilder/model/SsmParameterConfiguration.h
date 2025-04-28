/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/SsmParameterDataType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Configuration for a single Parameter in the Amazon Web Services Systems
   * Manager (SSM) Parameter Store in a given Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/SsmParameterConfiguration">AWS
   * API Reference</a></p>
   */
  class SsmParameterConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API SsmParameterConfiguration() = default;
    AWS_IMAGEBUILDER_API SsmParameterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API SsmParameterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the account that will own the Parameter in a given Region. During
     * distribution, this account must be specified in distribution settings as a
     * target account for the Region.</p>
     */
    inline const Aws::String& GetAmiAccountId() const { return m_amiAccountId; }
    inline bool AmiAccountIdHasBeenSet() const { return m_amiAccountIdHasBeenSet; }
    template<typename AmiAccountIdT = Aws::String>
    void SetAmiAccountId(AmiAccountIdT&& value) { m_amiAccountIdHasBeenSet = true; m_amiAccountId = std::forward<AmiAccountIdT>(value); }
    template<typename AmiAccountIdT = Aws::String>
    SsmParameterConfiguration& WithAmiAccountId(AmiAccountIdT&& value) { SetAmiAccountId(std::forward<AmiAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the name of the Parameter in the target Region or account. The image
     * distribution creates the Parameter if it doesn't already exist. Otherwise, it
     * updates the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    SsmParameterConfiguration& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type specifies what type of value the Parameter contains. We
     * recommend that you use data type <code>aws:ec2:image</code>.</p>
     */
    inline SsmParameterDataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(SsmParameterDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline SsmParameterConfiguration& WithDataType(SsmParameterDataType value) { SetDataType(value); return *this;}
    ///@}
  private:

    Aws::String m_amiAccountId;
    bool m_amiAccountIdHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    SsmParameterDataType m_dataType{SsmParameterDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
