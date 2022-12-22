/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class DeleteBotVersionRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API DeleteBotVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBotVersion"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline DeleteBotVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline DeleteBotVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline DeleteBotVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline DeleteBotVersionRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline DeleteBotVersionRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to delete. You cannot delete the <code>$LATEST</code>
     * version of the bot. To delete the <code>$LATEST</code> version, use the
     * <a>DeleteBot</a> operation.</p>
     */
    inline DeleteBotVersionRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
