/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConflictingAliasesList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConflictingAliases2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConflictingAliases2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConflictingAliases2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConflictingAliasesList m_conflictingAliasesList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
