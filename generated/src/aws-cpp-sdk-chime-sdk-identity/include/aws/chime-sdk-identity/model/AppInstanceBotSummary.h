/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>High-level information about an AppInstanceBot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceBotSummary">AWS
   * API Reference</a></p>
   */
  class AppInstanceBotSummary
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceBotSummary();
    AWS_CHIMESDKIDENTITY_API AppInstanceBotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceBotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const{ return m_appInstanceBotArn; }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline bool AppInstanceBotArnHasBeenSet() const { return m_appInstanceBotArnHasBeenSet; }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline void SetAppInstanceBotArn(const Aws::String& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = value; }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline void SetAppInstanceBotArn(Aws::String&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::move(value); }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline void SetAppInstanceBotArn(const char* value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn.assign(value); }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline AppInstanceBotSummary& WithAppInstanceBotArn(const Aws::String& value) { SetAppInstanceBotArn(value); return *this;}

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline AppInstanceBotSummary& WithAppInstanceBotArn(Aws::String&& value) { SetAppInstanceBotArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline AppInstanceBotSummary& WithAppInstanceBotArn(const char* value) { SetAppInstanceBotArn(value); return *this;}


    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline AppInstanceBotSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline AppInstanceBotSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline AppInstanceBotSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline AppInstanceBotSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline AppInstanceBotSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline AppInstanceBotSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_appInstanceBotArn;
    bool m_appInstanceBotArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
