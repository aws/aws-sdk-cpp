/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class GetMetadataTransferJobRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API GetMetadataTransferJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetadataTransferJob"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const { return m_metadataTransferJobId; }
    inline bool MetadataTransferJobIdHasBeenSet() const { return m_metadataTransferJobIdHasBeenSet; }
    template<typename MetadataTransferJobIdT = Aws::String>
    void SetMetadataTransferJobId(MetadataTransferJobIdT&& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = std::forward<MetadataTransferJobIdT>(value); }
    template<typename MetadataTransferJobIdT = Aws::String>
    GetMetadataTransferJobRequest& WithMetadataTransferJobId(MetadataTransferJobIdT&& value) { SetMetadataTransferJobId(std::forward<MetadataTransferJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataTransferJobId;
    bool m_metadataTransferJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
