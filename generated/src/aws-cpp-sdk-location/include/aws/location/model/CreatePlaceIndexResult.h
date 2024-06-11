﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LocationService
{
namespace Model
{
  class CreatePlaceIndexResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreatePlaceIndexResult();
    AWS_LOCATIONSERVICE_API CreatePlaceIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreatePlaceIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the place index resource.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }
    inline CreatePlaceIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline CreatePlaceIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline CreatePlaceIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across Amazon Web Services. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }
    inline CreatePlaceIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}
    inline CreatePlaceIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}
    inline CreatePlaceIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline CreatePlaceIndexResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CreatePlaceIndexResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePlaceIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePlaceIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePlaceIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_indexName;

    Aws::String m_indexArn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
