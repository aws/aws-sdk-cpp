/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/CapabilityDirection.h>
#include <aws/b2bi/model/EdiType.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Specifies the details for the EDI (electronic data interchange)
   * transformation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/EdiConfiguration">AWS
   * API Reference</a></p>
   */
  class EdiConfiguration
  {
  public:
    AWS_B2BI_API EdiConfiguration() = default;
    AWS_B2BI_API EdiConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API EdiConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether this is capability is for inbound or outbound
     * transformations.</p>
     */
    inline CapabilityDirection GetCapabilityDirection() const { return m_capabilityDirection; }
    inline bool CapabilityDirectionHasBeenSet() const { return m_capabilityDirectionHasBeenSet; }
    inline void SetCapabilityDirection(CapabilityDirection value) { m_capabilityDirectionHasBeenSet = true; m_capabilityDirection = value; }
    inline EdiConfiguration& WithCapabilityDirection(CapabilityDirection value) { SetCapabilityDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline const EdiType& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = EdiType>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = EdiType>
    EdiConfiguration& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline const S3Location& GetInputLocation() const { return m_inputLocation; }
    inline bool InputLocationHasBeenSet() const { return m_inputLocationHasBeenSet; }
    template<typename InputLocationT = S3Location>
    void SetInputLocation(InputLocationT&& value) { m_inputLocationHasBeenSet = true; m_inputLocation = std::forward<InputLocationT>(value); }
    template<typename InputLocationT = S3Location>
    EdiConfiguration& WithInputLocation(InputLocationT&& value) { SetInputLocation(std::forward<InputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline const S3Location& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = S3Location>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = S3Location>
    EdiConfiguration& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const { return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    template<typename TransformerIdT = Aws::String>
    void SetTransformerId(TransformerIdT&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::forward<TransformerIdT>(value); }
    template<typename TransformerIdT = Aws::String>
    EdiConfiguration& WithTransformerId(TransformerIdT&& value) { SetTransformerId(std::forward<TransformerIdT>(value)); return *this;}
    ///@}
  private:

    CapabilityDirection m_capabilityDirection{CapabilityDirection::NOT_SET};
    bool m_capabilityDirectionHasBeenSet = false;

    EdiType m_type;
    bool m_typeHasBeenSet = false;

    S3Location m_inputLocation;
    bool m_inputLocationHasBeenSet = false;

    S3Location m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
