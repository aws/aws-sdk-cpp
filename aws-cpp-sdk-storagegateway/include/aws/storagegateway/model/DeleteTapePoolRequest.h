/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API DeleteTapePoolRequest : public StorageGatewayRequest
  {
  public:
    DeleteTapePoolRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DeleteTapePoolRequest> Clone() const
    {
      return Aws::MakeUnique<DeleteTapePoolRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTapePool"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline const Aws::String& GetPoolARN() const{ return m_poolARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline bool PoolARNHasBeenSet() const { return m_poolARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline void SetPoolARN(const Aws::String& value) { m_poolARNHasBeenSet = true; m_poolARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline void SetPoolARN(Aws::String&& value) { m_poolARNHasBeenSet = true; m_poolARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline void SetPoolARN(const char* value) { m_poolARNHasBeenSet = true; m_poolARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline DeleteTapePoolRequest& WithPoolARN(const Aws::String& value) { SetPoolARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline DeleteTapePoolRequest& WithPoolARN(Aws::String&& value) { SetPoolARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline DeleteTapePoolRequest& WithPoolARN(const char* value) { SetPoolARN(value); return *this;}

  private:

    Aws::String m_poolARN;
    bool m_poolARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
