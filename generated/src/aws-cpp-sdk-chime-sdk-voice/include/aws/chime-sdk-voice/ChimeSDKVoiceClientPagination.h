/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoiceClient.h>
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

namespace Aws {
namespace ChimeSDKVoice {

using ListPhoneNumberOrdersPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListPhoneNumberOrdersRequest,
                                      Pagination::ListPhoneNumberOrdersPaginationTraits<ChimeSDKVoiceClient>>;
using ListPhoneNumbersPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListPhoneNumbersRequest,
                                                                    Pagination::ListPhoneNumbersPaginationTraits<ChimeSDKVoiceClient>>;
using ListProxySessionsPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListProxySessionsRequest,
                                                                     Pagination::ListProxySessionsPaginationTraits<ChimeSDKVoiceClient>>;
using ListSipMediaApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListSipMediaApplicationsRequest,
                                      Pagination::ListSipMediaApplicationsPaginationTraits<ChimeSDKVoiceClient>>;
using ListSipRulesPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListSipRulesRequest,
                                                                Pagination::ListSipRulesPaginationTraits<ChimeSDKVoiceClient>>;
using ListVoiceConnectorGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListVoiceConnectorGroupsRequest,
                                      Pagination::ListVoiceConnectorGroupsPaginationTraits<ChimeSDKVoiceClient>>;
using ListVoiceConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListVoiceConnectorsRequest,
                                      Pagination::ListVoiceConnectorsPaginationTraits<ChimeSDKVoiceClient>>;
using ListVoiceProfileDomainsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListVoiceProfileDomainsRequest,
                                      Pagination::ListVoiceProfileDomainsPaginationTraits<ChimeSDKVoiceClient>>;
using ListVoiceProfilesPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::ListVoiceProfilesRequest,
                                                                     Pagination::ListVoiceProfilesPaginationTraits<ChimeSDKVoiceClient>>;
using SearchAvailablePhoneNumbersPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKVoiceClient, Model::SearchAvailablePhoneNumbersRequest,
                                      Pagination::SearchAvailablePhoneNumbersPaginationTraits<ChimeSDKVoiceClient>>;

}  // namespace ChimeSDKVoice
}  // namespace Aws
