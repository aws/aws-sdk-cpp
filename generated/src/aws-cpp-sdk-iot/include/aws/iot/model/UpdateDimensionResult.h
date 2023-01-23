/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DimensionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class UpdateDimensionResult
  {
  public:
    AWS_IOT_API UpdateDimensionResult();
    AWS_IOT_API UpdateDimensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateDimensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline UpdateDimensionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline UpdateDimensionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline UpdateDimensionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline UpdateDimensionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline UpdateDimensionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline UpdateDimensionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of the dimension.</p>
     */
    inline const DimensionType& GetType() const{ return m_type; }

    /**
     * <p>The type of the dimension.</p>
     */
    inline void SetType(const DimensionType& value) { m_type = value; }

    /**
     * <p>The type of the dimension.</p>
     */
    inline void SetType(DimensionType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the dimension.</p>
     */
    inline UpdateDimensionResult& WithType(const DimensionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the dimension.</p>
     */
    inline UpdateDimensionResult& WithType(DimensionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValues = value; }

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValues = std::move(value); }

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline UpdateDimensionResult& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline UpdateDimensionResult& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline UpdateDimensionResult& AddStringValues(const Aws::String& value) { m_stringValues.push_back(value); return *this; }

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline UpdateDimensionResult& AddStringValues(Aws::String&& value) { m_stringValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline UpdateDimensionResult& AddStringValues(const char* value) { m_stringValues.push_back(value); return *this; }


    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was
     * initially created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was
     * initially created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was
     * initially created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was
     * initially created.</p>
     */
    inline UpdateDimensionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was
     * initially created.</p>
     */
    inline UpdateDimensionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was most
     * recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was most
     * recently updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was most
     * recently updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was most
     * recently updated.</p>
     */
    inline UpdateDimensionResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was most
     * recently updated.</p>
     */
    inline UpdateDimensionResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    DimensionType m_type;

    Aws::Vector<Aws::String> m_stringValues;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
