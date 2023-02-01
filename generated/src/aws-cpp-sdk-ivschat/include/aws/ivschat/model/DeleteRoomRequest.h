/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class DeleteRoomRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API DeleteRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRoom"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline DeleteRoomRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline DeleteRoomRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the room to be deleted. Currently this must be an ARN.</p>
     */
    inline DeleteRoomRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
