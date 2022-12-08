/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AutomaticTapeCreationRule.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Information about the gateway's automatic tape creation policies, including
   * the automatic tape creation rules and the gateway that is using the
   * policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AutomaticTapeCreationPolicyInfo">AWS
   * API Reference</a></p>
   */
  class AutomaticTapeCreationPolicyInfo
  {
  public:
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationPolicyInfo();
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationPolicyInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationPolicyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline const Aws::Vector<AutomaticTapeCreationRule>& GetAutomaticTapeCreationRules() const{ return m_automaticTapeCreationRules; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline bool AutomaticTapeCreationRulesHasBeenSet() const { return m_automaticTapeCreationRulesHasBeenSet; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline void SetAutomaticTapeCreationRules(const Aws::Vector<AutomaticTapeCreationRule>& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules = value; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline void SetAutomaticTapeCreationRules(Aws::Vector<AutomaticTapeCreationRule>&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules = std::move(value); }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline AutomaticTapeCreationPolicyInfo& WithAutomaticTapeCreationRules(const Aws::Vector<AutomaticTapeCreationRule>& value) { SetAutomaticTapeCreationRules(value); return *this;}

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline AutomaticTapeCreationPolicyInfo& WithAutomaticTapeCreationRules(Aws::Vector<AutomaticTapeCreationRule>&& value) { SetAutomaticTapeCreationRules(std::move(value)); return *this;}

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline AutomaticTapeCreationPolicyInfo& AddAutomaticTapeCreationRules(const AutomaticTapeCreationRule& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules.push_back(value); return *this; }

    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline AutomaticTapeCreationPolicyInfo& AddAutomaticTapeCreationRules(AutomaticTapeCreationRule&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline AutomaticTapeCreationPolicyInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline AutomaticTapeCreationPolicyInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline AutomaticTapeCreationPolicyInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::Vector<AutomaticTapeCreationRule> m_automaticTapeCreationRules;
    bool m_automaticTapeCreationRulesHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
