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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>DeliverConfigSnapshot</a> action, in JSON
   * format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshotResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult
  {
  public:
    DeliverConfigSnapshotResult();
    DeliverConfigSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeliverConfigSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline const Aws::String& GetConfigSnapshotId() const{ return m_configSnapshotId; }

    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline void SetConfigSnapshotId(const Aws::String& value) { m_configSnapshotId = value; }

    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline void SetConfigSnapshotId(Aws::String&& value) { m_configSnapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline void SetConfigSnapshotId(const char* value) { m_configSnapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline DeliverConfigSnapshotResult& WithConfigSnapshotId(const Aws::String& value) { SetConfigSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline DeliverConfigSnapshotResult& WithConfigSnapshotId(Aws::String&& value) { SetConfigSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline DeliverConfigSnapshotResult& WithConfigSnapshotId(const char* value) { SetConfigSnapshotId(value); return *this;}

  private:

    Aws::String m_configSnapshotId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
