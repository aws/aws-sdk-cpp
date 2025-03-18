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
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult() = default;
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline const Aws::String& GetConfigSnapshotId() const { return m_configSnapshotId; }
    template<typename ConfigSnapshotIdT = Aws::String>
    void SetConfigSnapshotId(ConfigSnapshotIdT&& value) { m_configSnapshotIdHasBeenSet = true; m_configSnapshotId = std::forward<ConfigSnapshotIdT>(value); }
    template<typename ConfigSnapshotIdT = Aws::String>
    DeliverConfigSnapshotResult& WithConfigSnapshotId(ConfigSnapshotIdT&& value) { SetConfigSnapshotId(std::forward<ConfigSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeliverConfigSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configSnapshotId;
    bool m_configSnapshotIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
