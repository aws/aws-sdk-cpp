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


    ///@{
    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateDimensionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDimensionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDimensionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN)of the created dimension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateDimensionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateDimensionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateDimensionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dimension.</p>
     */
    inline const DimensionType& GetType() const{ return m_type; }
    inline void SetType(const DimensionType& value) { m_type = value; }
    inline void SetType(DimensionType&& value) { m_type = std::move(value); }
    inline UpdateDimensionResult& WithType(const DimensionType& value) { SetType(value); return *this;}
    inline UpdateDimensionResult& WithType(DimensionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value or list of values used to scope the dimension. For example, for
     * topic filters, this is the pattern used to match the MQTT topic name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValues = value; }
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValues = std::move(value); }
    inline UpdateDimensionResult& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}
    inline UpdateDimensionResult& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}
    inline UpdateDimensionResult& AddStringValues(const Aws::String& value) { m_stringValues.push_back(value); return *this; }
    inline UpdateDimensionResult& AddStringValues(Aws::String&& value) { m_stringValues.push_back(std::move(value)); return *this; }
    inline UpdateDimensionResult& AddStringValues(const char* value) { m_stringValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was
     * initially created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline UpdateDimensionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline UpdateDimensionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in milliseconds since epoch, when the dimension was most
     * recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline UpdateDimensionResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline UpdateDimensionResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDimensionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDimensionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDimensionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_arn;

    DimensionType m_type;

    Aws::Vector<Aws::String> m_stringValues;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
