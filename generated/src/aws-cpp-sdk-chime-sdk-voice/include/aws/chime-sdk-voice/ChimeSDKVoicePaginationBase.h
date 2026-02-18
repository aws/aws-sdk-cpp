/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/chime-sdk-voice/model/ListPhoneNumberOrdersPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListSipMediaApplicationsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListSipRulesPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorGroupsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceConnectorsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfileDomainsPaginationTraits.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfilesPaginationTraits.h>
#include <aws/chime-sdk-voice/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ChimeSDKVoice {

class ChimeSDKVoiceClient;

template <typename DerivedClient>
class ChimeSDKVoicePaginationBase {
 public:
  /**
   * Create a paginator for ListPhoneNumberOrders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumberOrdersRequest,
                                    Pagination::ListPhoneNumberOrdersPaginationTraits<DerivedClient>>
  ListPhoneNumberOrdersPaginator(const Model::ListPhoneNumberOrdersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumberOrdersRequest,
                                             Pagination::ListPhoneNumberOrdersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersRequest,
                                    Pagination::ListPhoneNumbersPaginationTraits<DerivedClient>>
  ListPhoneNumbersPaginator(const Model::ListPhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersRequest,
                                             Pagination::ListPhoneNumbersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProxySessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxySessionsRequest,
                                    Pagination::ListProxySessionsPaginationTraits<DerivedClient>>
  ListProxySessionsPaginator(const Model::ListProxySessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxySessionsRequest,
                                             Pagination::ListProxySessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSipMediaApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSipMediaApplicationsRequest,
                                    Pagination::ListSipMediaApplicationsPaginationTraits<DerivedClient>>
  ListSipMediaApplicationsPaginator(const Model::ListSipMediaApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSipMediaApplicationsRequest,
                                             Pagination::ListSipMediaApplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSipRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSipRulesRequest, Pagination::ListSipRulesPaginationTraits<DerivedClient>>
  ListSipRulesPaginator(const Model::ListSipRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSipRulesRequest,
                                             Pagination::ListSipRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListVoiceConnectorGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceConnectorGroupsRequest,
                                    Pagination::ListVoiceConnectorGroupsPaginationTraits<DerivedClient>>
  ListVoiceConnectorGroupsPaginator(const Model::ListVoiceConnectorGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceConnectorGroupsRequest,
                                             Pagination::ListVoiceConnectorGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVoiceConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceConnectorsRequest,
                                    Pagination::ListVoiceConnectorsPaginationTraits<DerivedClient>>
  ListVoiceConnectorsPaginator(const Model::ListVoiceConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceConnectorsRequest,
                                             Pagination::ListVoiceConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVoiceProfileDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceProfileDomainsRequest,
                                    Pagination::ListVoiceProfileDomainsPaginationTraits<DerivedClient>>
  ListVoiceProfileDomainsPaginator(const Model::ListVoiceProfileDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceProfileDomainsRequest,
                                             Pagination::ListVoiceProfileDomainsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVoiceProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceProfilesRequest,
                                    Pagination::ListVoiceProfilesPaginationTraits<DerivedClient>>
  ListVoiceProfilesPaginator(const Model::ListVoiceProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVoiceProfilesRequest,
                                             Pagination::ListVoiceProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchAvailablePhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAvailablePhoneNumbersRequest,
                                    Pagination::SearchAvailablePhoneNumbersPaginationTraits<DerivedClient>>
  SearchAvailablePhoneNumbersPaginator(const Model::SearchAvailablePhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAvailablePhoneNumbersRequest,
                                             Pagination::SearchAvailablePhoneNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ChimeSDKVoice
}  // namespace Aws
