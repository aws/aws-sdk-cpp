/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/CSVInput.h>
#include <aws/s3/model/CompressionType.h>
#include <aws/s3/model/JSONInput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * Describes the serialization format of the object.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InputSerialization">AWS
   * API Reference</a></p>
   */
  class AWS_S3_API InputSerialization
  {
  public:
    InputSerialization();
    InputSerialization(const Aws::Utils::Xml::XmlNode& xmlNode);
    InputSerialization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * Describes the serialization of a CSV-encoded object.
     */
    inline const CSVInput& GetCSV() const{ return m_cSV; }

    /**
     * Describes the serialization of a CSV-encoded object.
     */
    inline void SetCSV(const CSVInput& value) { m_cSVHasBeenSet = true; m_cSV = value; }

    /**
     * Describes the serialization of a CSV-encoded object.
     */
    inline void SetCSV(CSVInput&& value) { m_cSVHasBeenSet = true; m_cSV = std::move(value); }

    /**
     * Describes the serialization of a CSV-encoded object.
     */
    inline InputSerialization& WithCSV(const CSVInput& value) { SetCSV(value); return *this;}

    /**
     * Describes the serialization of a CSV-encoded object.
     */
    inline InputSerialization& WithCSV(CSVInput&& value) { SetCSV(std::move(value)); return *this;}


    /**
     * Specifies object's compression format. Valid values: NONE, GZIP. Default Value:
     * NONE.
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * Specifies object's compression format. Valid values: NONE, GZIP. Default Value:
     * NONE.
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * Specifies object's compression format. Valid values: NONE, GZIP. Default Value:
     * NONE.
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * Specifies object's compression format. Valid values: NONE, GZIP. Default Value:
     * NONE.
     */
    inline InputSerialization& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * Specifies object's compression format. Valid values: NONE, GZIP. Default Value:
     * NONE.
     */
    inline InputSerialization& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * Specifies JSON as object's input serialization format.
     */
    inline const JSONInput& GetJSON() const{ return m_jSON; }

    /**
     * Specifies JSON as object's input serialization format.
     */
    inline void SetJSON(const JSONInput& value) { m_jSONHasBeenSet = true; m_jSON = value; }

    /**
     * Specifies JSON as object's input serialization format.
     */
    inline void SetJSON(JSONInput&& value) { m_jSONHasBeenSet = true; m_jSON = std::move(value); }

    /**
     * Specifies JSON as object's input serialization format.
     */
    inline InputSerialization& WithJSON(const JSONInput& value) { SetJSON(value); return *this;}

    /**
     * Specifies JSON as object's input serialization format.
     */
    inline InputSerialization& WithJSON(JSONInput&& value) { SetJSON(std::move(value)); return *this;}

  private:

    CSVInput m_cSV;
    bool m_cSVHasBeenSet;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet;

    JSONInput m_jSON;
    bool m_jSONHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
