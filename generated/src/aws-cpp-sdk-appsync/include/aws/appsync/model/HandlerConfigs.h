/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/HandlerConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The configuration for the <code>OnPublish</code> and <code>OnSubscribe</code>
   * handlers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/HandlerConfigs">AWS
   * API Reference</a></p>
   */
  class HandlerConfigs
  {
  public:
    AWS_APPSYNC_API HandlerConfigs() = default;
    AWS_APPSYNC_API HandlerConfigs(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API HandlerConfigs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the <code>OnPublish</code> handler.</p>
     */
    inline const HandlerConfig& GetOnPublish() const { return m_onPublish; }
    inline bool OnPublishHasBeenSet() const { return m_onPublishHasBeenSet; }
    template<typename OnPublishT = HandlerConfig>
    void SetOnPublish(OnPublishT&& value) { m_onPublishHasBeenSet = true; m_onPublish = std::forward<OnPublishT>(value); }
    template<typename OnPublishT = HandlerConfig>
    HandlerConfigs& WithOnPublish(OnPublishT&& value) { SetOnPublish(std::forward<OnPublishT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the <code>OnSubscribe</code> handler.</p>
     */
    inline const HandlerConfig& GetOnSubscribe() const { return m_onSubscribe; }
    inline bool OnSubscribeHasBeenSet() const { return m_onSubscribeHasBeenSet; }
    template<typename OnSubscribeT = HandlerConfig>
    void SetOnSubscribe(OnSubscribeT&& value) { m_onSubscribeHasBeenSet = true; m_onSubscribe = std::forward<OnSubscribeT>(value); }
    template<typename OnSubscribeT = HandlerConfig>
    HandlerConfigs& WithOnSubscribe(OnSubscribeT&& value) { SetOnSubscribe(std::forward<OnSubscribeT>(value)); return *this;}
    ///@}
  private:

    HandlerConfig m_onPublish;
    bool m_onPublishHasBeenSet = false;

    HandlerConfig m_onSubscribe;
    bool m_onSubscribeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
