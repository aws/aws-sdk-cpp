/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
    AWS_B2BI_API EdiConfiguration();
    AWS_B2BI_API EdiConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API EdiConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline const EdiType& GetType() const{ return m_type; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline void SetType(const EdiType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline void SetType(EdiType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline EdiConfiguration& WithType(const EdiType& value) { SetType(value); return *this;}

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline EdiConfiguration& WithType(EdiType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline const S3Location& GetInputLocation() const{ return m_inputLocation; }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline bool InputLocationHasBeenSet() const { return m_inputLocationHasBeenSet; }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline void SetInputLocation(const S3Location& value) { m_inputLocationHasBeenSet = true; m_inputLocation = value; }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline void SetInputLocation(S3Location&& value) { m_inputLocationHasBeenSet = true; m_inputLocation = std::move(value); }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline EdiConfiguration& WithInputLocation(const S3Location& value) { SetInputLocation(value); return *this;}

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the input file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline EdiConfiguration& WithInputLocation(S3Location&& value) { SetInputLocation(std::move(value)); return *this;}


    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline const S3Location& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline void SetOutputLocation(const S3Location& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline void SetOutputLocation(S3Location&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline EdiConfiguration& WithOutputLocation(const S3Location& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>Contains the Amazon S3 bucket and prefix for the location of the output file,
     * which is contained in an <code>S3Location</code> object.</p>
     */
    inline EdiConfiguration& WithOutputLocation(S3Location&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline EdiConfiguration& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline EdiConfiguration& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline EdiConfiguration& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}

  private:

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
