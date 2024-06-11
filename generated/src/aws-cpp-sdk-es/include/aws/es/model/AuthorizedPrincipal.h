﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/PrincipalType.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Information about an account or service that has access to an Amazon
   * OpenSearch Service domain through the use of an interface VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AuthorizedPrincipal">AWS
   * API Reference</a></p>
   */
  class AuthorizedPrincipal
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AuthorizedPrincipal();
    AWS_ELASTICSEARCHSERVICE_API AuthorizedPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AuthorizedPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of principal.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline AuthorizedPrincipal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline AuthorizedPrincipal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal that is allowed access to the domain.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline AuthorizedPrincipal& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline AuthorizedPrincipal& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline AuthorizedPrincipal& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}
  private:

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
