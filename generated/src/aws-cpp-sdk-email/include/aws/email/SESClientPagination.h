/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/email/SESClient.h>
#include <aws/email/model/ListCustomVerificationEmailTemplatesPaginationTraits.h>
#include <aws/email/model/ListIdentitiesPaginationTraits.h>

namespace Aws {
namespace SES {

using ListCustomVerificationEmailTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<SESClient, Model::ListCustomVerificationEmailTemplatesRequest,
                                      Pagination::ListCustomVerificationEmailTemplatesPaginationTraits<SESClient>>;
using ListIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<SESClient, Model::ListIdentitiesRequest, Pagination::ListIdentitiesPaginationTraits<SESClient>>;

}  // namespace SES
}  // namespace Aws
