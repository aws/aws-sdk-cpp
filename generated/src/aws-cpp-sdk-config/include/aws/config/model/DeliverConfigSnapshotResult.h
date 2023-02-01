/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeliverConfigSnapshotResult
  {
  public:
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult();
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
