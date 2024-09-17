/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Upload.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list uploads request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploadsResult">AWS
   * API Reference</a></p>
   */
  class ListUploadsResult
  {
  public:
    AWS_DEVICEFARM_API ListUploadsResult();
    AWS_DEVICEFARM_API ListUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the uploads.</p>
     */
    inline const Aws::Vector<Upload>& GetUploads() const{ return m_uploads; }
    inline void SetUploads(const Aws::Vector<Upload>& value) { m_uploads = value; }
    inline void SetUploads(Aws::Vector<Upload>&& value) { m_uploads = std::move(value); }
    inline ListUploadsResult& WithUploads(const Aws::Vector<Upload>& value) { SetUploads(value); return *this;}
    inline ListUploadsResult& WithUploads(Aws::Vector<Upload>&& value) { SetUploads(std::move(value)); return *this;}
    inline ListUploadsResult& AddUploads(const Upload& value) { m_uploads.push_back(value); return *this; }
    inline ListUploadsResult& AddUploads(Upload&& value) { m_uploads.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUploadsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUploadsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUploadsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUploadsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUploadsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUploadsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Upload> m_uploads;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
