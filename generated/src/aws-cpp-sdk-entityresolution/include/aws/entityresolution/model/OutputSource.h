/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/OutputAttribute.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
   * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
   * column to be included in the output table, and whether the values of the column
   * should be hashed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/OutputSource">AWS
   * API Reference</a></p>
   */
  class OutputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API OutputSource() = default;
    AWS_ENTITYRESOLUTION_API OutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API OutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline const Aws::String& GetOutputS3Path() const { return m_outputS3Path; }
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }
    template<typename OutputS3PathT = Aws::String>
    void SetOutputS3Path(OutputS3PathT&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::forward<OutputS3PathT>(value); }
    template<typename OutputS3PathT = Aws::String>
    OutputSource& WithOutputS3Path(OutputS3PathT&& value) { SetOutputS3Path(std::forward<OutputS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline const Aws::String& GetKMSArn() const { return m_kMSArn; }
    inline bool KMSArnHasBeenSet() const { return m_kMSArnHasBeenSet; }
    template<typename KMSArnT = Aws::String>
    void SetKMSArn(KMSArnT&& value) { m_kMSArnHasBeenSet = true; m_kMSArn = std::forward<KMSArnT>(value); }
    template<typename KMSArnT = Aws::String>
    OutputSource& WithKMSArn(KMSArnT&& value) { SetKMSArn(std::forward<KMSArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline const Aws::Vector<OutputAttribute>& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = Aws::Vector<OutputAttribute>>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = Aws::Vector<OutputAttribute>>
    OutputSource& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    template<typename OutputT = OutputAttribute>
    OutputSource& AddOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output.emplace_back(std::forward<OutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Normalizes the attributes defined in the schema in the input data. For
     * example, if an attribute has an <code>AttributeType</code> of
     * <code>PHONE_NUMBER</code>, and the data in the input table is in a format of
     * 1234567890, Entity Resolution will normalize this field in the output to
     * (123)-456-7890.</p>
     */
    inline bool GetApplyNormalization() const { return m_applyNormalization; }
    inline bool ApplyNormalizationHasBeenSet() const { return m_applyNormalizationHasBeenSet; }
    inline void SetApplyNormalization(bool value) { m_applyNormalizationHasBeenSet = true; m_applyNormalization = value; }
    inline OutputSource& WithApplyNormalization(bool value) { SetApplyNormalization(value); return *this;}
    ///@}
  private:

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;

    Aws::String m_kMSArn;
    bool m_kMSArnHasBeenSet = false;

    Aws::Vector<OutputAttribute> m_output;
    bool m_outputHasBeenSet = false;

    bool m_applyNormalization{false};
    bool m_applyNormalizationHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
