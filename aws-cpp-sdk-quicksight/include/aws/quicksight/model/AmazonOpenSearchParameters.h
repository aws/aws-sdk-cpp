﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for OpenSearch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AmazonOpenSearchParameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AmazonOpenSearchParameters
  {
  public:
    AmazonOpenSearchParameters();
    AmazonOpenSearchParameters(Aws::Utils::Json::JsonView jsonValue);
    AmazonOpenSearchParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OpenSearch domain.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline AmazonOpenSearchParameters& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline AmazonOpenSearchParameters& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The OpenSearch domain.</p>
     */
    inline AmazonOpenSearchParameters& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
