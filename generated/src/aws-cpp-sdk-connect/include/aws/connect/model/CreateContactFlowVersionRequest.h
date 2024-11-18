/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateContactFlowVersionRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateContactFlowVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContactFlowVersion"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateContactFlowVersionRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateContactFlowVersionRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateContactFlowVersionRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateContactFlowVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateContactFlowVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateContactFlowVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }
    inline CreateContactFlowVersionRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline CreateContactFlowVersionRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline CreateContactFlowVersionRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the checksum value of the flow content.</p>
     */
    inline const Aws::String& GetFlowContentSha256() const{ return m_flowContentSha256; }
    inline bool FlowContentSha256HasBeenSet() const { return m_flowContentSha256HasBeenSet; }
    inline void SetFlowContentSha256(const Aws::String& value) { m_flowContentSha256HasBeenSet = true; m_flowContentSha256 = value; }
    inline void SetFlowContentSha256(Aws::String&& value) { m_flowContentSha256HasBeenSet = true; m_flowContentSha256 = std::move(value); }
    inline void SetFlowContentSha256(const char* value) { m_flowContentSha256HasBeenSet = true; m_flowContentSha256.assign(value); }
    inline CreateContactFlowVersionRequest& WithFlowContentSha256(const Aws::String& value) { SetFlowContentSha256(value); return *this;}
    inline CreateContactFlowVersionRequest& WithFlowContentSha256(Aws::String&& value) { SetFlowContentSha256(std::move(value)); return *this;}
    inline CreateContactFlowVersionRequest& WithFlowContentSha256(const char* value) { SetFlowContentSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline CreateContactFlowVersionRequest& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline CreateContactFlowVersionRequest& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline CreateContactFlowVersionRequest& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline CreateContactFlowVersionRequest& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline CreateContactFlowVersionRequest& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_flowContentSha256;
    bool m_flowContentSha256HasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
