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
  class GetBotRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBot"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the bot. The name is case sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetBotRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetBotRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetBotRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version or alias of the bot.</p>
     */
    inline const Aws::String& GetVersionOrAlias() const{ return m_versionOrAlias; }
    inline bool VersionOrAliasHasBeenSet() const { return m_versionOrAliasHasBeenSet; }
    inline void SetVersionOrAlias(const Aws::String& value) { m_versionOrAliasHasBeenSet = true; m_versionOrAlias = value; }
    inline void SetVersionOrAlias(Aws::String&& value) { m_versionOrAliasHasBeenSet = true; m_versionOrAlias = std::move(value); }
    inline void SetVersionOrAlias(const char* value) { m_versionOrAliasHasBeenSet = true; m_versionOrAlias.assign(value); }
    inline GetBotRequest& WithVersionOrAlias(const Aws::String& value) { SetVersionOrAlias(value); return *this;}
    inline GetBotRequest& WithVersionOrAlias(Aws::String&& value) { SetVersionOrAlias(std::move(value)); return *this;}
    inline GetBotRequest& WithVersionOrAlias(const char* value) { SetVersionOrAlias(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionOrAlias;
    bool m_versionOrAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
