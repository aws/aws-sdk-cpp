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
  class AWS_DEVICEFARM_API ListUploadsResult
  {
  public:
    ListUploadsResult();
    ListUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the uploads.</p>
     */
    inline const Aws::Vector<Upload>& GetUploads() const{ return m_uploads; }

    /**
     * <p>Information about the uploads.</p>
     */
    inline void SetUploads(const Aws::Vector<Upload>& value) { m_uploads = value; }

    /**
     * <p>Information about the uploads.</p>
     */
    inline void SetUploads(Aws::Vector<Upload>&& value) { m_uploads = std::move(value); }

    /**
     * <p>Information about the uploads.</p>
     */
    inline ListUploadsResult& WithUploads(const Aws::Vector<Upload>& value) { SetUploads(value); return *this;}

    /**
     * <p>Information about the uploads.</p>
     */
    inline ListUploadsResult& WithUploads(Aws::Vector<Upload>&& value) { SetUploads(std::move(value)); return *this;}

    /**
     * <p>Information about the uploads.</p>
     */
    inline ListUploadsResult& AddUploads(const Upload& value) { m_uploads.push_back(value); return *this; }

    /**
     * <p>Information about the uploads.</p>
     */
    inline ListUploadsResult& AddUploads(Upload&& value) { m_uploads.push_back(std::move(value)); return *this; }


    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListUploadsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListUploadsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListUploadsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Upload> m_uploads;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
