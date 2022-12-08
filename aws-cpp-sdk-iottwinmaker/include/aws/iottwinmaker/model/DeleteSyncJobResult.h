/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SyncJobState.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class DeleteSyncJobResult
  {
  public:
    AWS_IOTTWINMAKER_API DeleteSyncJobResult();
    AWS_IOTTWINMAKER_API DeleteSyncJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API DeleteSyncJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SyncJob response state.</p>
     */
    inline const SyncJobState& GetState() const{ return m_state; }

    /**
     * <p>The SyncJob response state.</p>
     */
    inline void SetState(const SyncJobState& value) { m_state = value; }

    /**
     * <p>The SyncJob response state.</p>
     */
    inline void SetState(SyncJobState&& value) { m_state = std::move(value); }

    /**
     * <p>The SyncJob response state.</p>
     */
    inline DeleteSyncJobResult& WithState(const SyncJobState& value) { SetState(value); return *this;}

    /**
     * <p>The SyncJob response state.</p>
     */
    inline DeleteSyncJobResult& WithState(SyncJobState&& value) { SetState(std::move(value)); return *this;}

  private:

    SyncJobState m_state;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
