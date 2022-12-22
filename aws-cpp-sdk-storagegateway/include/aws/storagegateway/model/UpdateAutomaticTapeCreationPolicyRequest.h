/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AutomaticTapeCreationRule.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateAutomaticTapeCreationPolicyRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateAutomaticTapeCreationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomaticTapeCreationPolicy"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline const Aws::Vector<AutomaticTapeCreationRule>& GetAutomaticTapeCreationRules() const{ return m_automaticTapeCreationRules; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline bool AutomaticTapeCreationRulesHasBeenSet() const { return m_automaticTapeCreationRulesHasBeenSet; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline void SetAutomaticTapeCreationRules(const Aws::Vector<AutomaticTapeCreationRule>& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules = value; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline void SetAutomaticTapeCreationRules(Aws::Vector<AutomaticTapeCreationRule>&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules = std::move(value); }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline UpdateAutomaticTapeCreationPolicyRequest& WithAutomaticTapeCreationRules(const Aws::Vector<AutomaticTapeCreationRule>& value) { SetAutomaticTapeCreationRules(value); return *this;}

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline UpdateAutomaticTapeCreationPolicyRequest& WithAutomaticTapeCreationRules(Aws::Vector<AutomaticTapeCreationRule>&& value) { SetAutomaticTapeCreationRules(std::move(value)); return *this;}

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline UpdateAutomaticTapeCreationPolicyRequest& AddAutomaticTapeCreationRules(const AutomaticTapeCreationRule& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules.push_back(value); return *this; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline UpdateAutomaticTapeCreationPolicyRequest& AddAutomaticTapeCreationRules(AutomaticTapeCreationRule&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateAutomaticTapeCreationPolicyRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateAutomaticTapeCreationPolicyRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateAutomaticTapeCreationPolicyRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::Vector<AutomaticTapeCreationRule> m_automaticTapeCreationRules;
    bool m_automaticTapeCreationRulesHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
