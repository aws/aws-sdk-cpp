/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/MetadataTransferJobState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The ListMetadataTransferJobs filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListMetadataTransferJobsFilter">AWS
   * API Reference</a></p>
   */
  class ListMetadataTransferJobsFilter
  {
  public:
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsFilter();
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workspace Id.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The workspace Id.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The workspace Id.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The workspace Id.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The workspace Id.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The workspace Id.</p>
     */
    inline ListMetadataTransferJobsFilter& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The workspace Id.</p>
     */
    inline ListMetadataTransferJobsFilter& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The workspace Id.</p>
     */
    inline ListMetadataTransferJobsFilter& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The filter state.</p>
     */
    inline const MetadataTransferJobState& GetState() const{ return m_state; }

    /**
     * <p>The filter state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The filter state.</p>
     */
    inline void SetState(const MetadataTransferJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The filter state.</p>
     */
    inline void SetState(MetadataTransferJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The filter state.</p>
     */
    inline ListMetadataTransferJobsFilter& WithState(const MetadataTransferJobState& value) { SetState(value); return *this;}

    /**
     * <p>The filter state.</p>
     */
    inline ListMetadataTransferJobsFilter& WithState(MetadataTransferJobState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    MetadataTransferJobState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
