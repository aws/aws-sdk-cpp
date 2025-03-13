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
    AWS_CHIMESDKIDENTITY_API AppInstanceBotSummary() = default;
    AWS_CHIMESDKIDENTITY_API AppInstanceBotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceBotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const { return m_appInstanceBotArn; }
    inline bool AppInstanceBotArnHasBeenSet() const { return m_appInstanceBotArnHasBeenSet; }
    template<typename AppInstanceBotArnT = Aws::String>
    void SetAppInstanceBotArn(AppInstanceBotArnT&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::forward<AppInstanceBotArnT>(value); }
    template<typename AppInstanceBotArnT = Aws::String>
    AppInstanceBotSummary& WithAppInstanceBotArn(AppInstanceBotArnT&& value) { SetAppInstanceBotArn(std::forward<AppInstanceBotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AppInstanceBox.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppInstanceBotSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the AppInstanceBot.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    AppInstanceBotSummary& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
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
