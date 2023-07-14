/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ApplicationLayerAutomaticResponseStatus.h>
#include <aws/shield/model/ResponseAction.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The automatic application layer DDoS mitigation settings for a
   * <a>Protection</a>. This configuration determines whether Shield Advanced
   * automatically manages rules in the web ACL in order to respond to application
   * layer events that Shield Advanced determines to be DDoS attacks. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ApplicationLayerAutomaticResponseConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API ApplicationLayerAutomaticResponseConfiguration
  {
  public:
    ApplicationLayerAutomaticResponseConfiguration();
    ApplicationLayerAutomaticResponseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ApplicationLayerAutomaticResponseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline const ApplicationLayerAutomaticResponseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline void SetStatus(const ApplicationLayerAutomaticResponseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline void SetStatus(ApplicationLayerAutomaticResponseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline ApplicationLayerAutomaticResponseConfiguration& WithStatus(const ApplicationLayerAutomaticResponseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline ApplicationLayerAutomaticResponseConfiguration& WithStatus(ApplicationLayerAutomaticResponseStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseAction& GetAction() const{ return m_action; }

    
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    
    inline void SetAction(const ResponseAction& value) { m_actionHasBeenSet = true; m_action = value; }

    
    inline void SetAction(ResponseAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    
    inline ApplicationLayerAutomaticResponseConfiguration& WithAction(const ResponseAction& value) { SetAction(value); return *this;}

    
    inline ApplicationLayerAutomaticResponseConfiguration& WithAction(ResponseAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    ApplicationLayerAutomaticResponseStatus m_status;
    bool m_statusHasBeenSet;

    ResponseAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
