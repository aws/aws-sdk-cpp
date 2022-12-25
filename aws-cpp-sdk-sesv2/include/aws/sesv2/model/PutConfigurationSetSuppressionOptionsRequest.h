/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to change the account suppression list preferences for a specific
   * configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetSuppressionOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutConfigurationSetSuppressionOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetSuppressionOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to change the suppression list preferences
     * for.</p>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const{ return m_suppressedReasons; }

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = value; }

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = std::move(value); }

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { SetSuppressedReasons(value); return *this;}

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { SetSuppressedReasons(std::move(value)); return *this;}

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& AddSuppressedReasons(const SuppressionListReason& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(value); return *this; }

    /**
     * <p>A list that contains the reasons that email addresses are automatically added
     * to the suppression list for your account. This list can contain any or all of
     * the following:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES adds an
     * email address to the suppression list for your account when a message sent to
     * that address results in a complaint.</p> </li> <li> <p> <code>BOUNCE</code> –
     * Amazon SES adds an email address to the suppression list for your account when a
     * message sent to that address results in a hard bounce.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& AddSuppressedReasons(SuppressionListReason&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::Vector<SuppressionListReason> m_suppressedReasons;
    bool m_suppressedReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
