/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConflictingAliasesList.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class ListConflictingAliases2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Result();
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of conflicting aliases.</p>
     */
    inline const ConflictingAliasesList& GetConflictingAliasesList() const{ return m_conflictingAliasesList; }

    /**
     * <p>A list of conflicting aliases.</p>
     */
    inline void SetConflictingAliasesList(const ConflictingAliasesList& value) { m_conflictingAliasesList = value; }

    /**
     * <p>A list of conflicting aliases.</p>
     */
    inline void SetConflictingAliasesList(ConflictingAliasesList&& value) { m_conflictingAliasesList = std::move(value); }

    /**
     * <p>A list of conflicting aliases.</p>
     */
    inline ListConflictingAliases2020_05_31Result& WithConflictingAliasesList(const ConflictingAliasesList& value) { SetConflictingAliasesList(value); return *this;}

    /**
     * <p>A list of conflicting aliases.</p>
     */
    inline ListConflictingAliases2020_05_31Result& WithConflictingAliasesList(ConflictingAliasesList&& value) { SetConflictingAliasesList(std::move(value)); return *this;}

  private:

    ConflictingAliasesList m_conflictingAliasesList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
