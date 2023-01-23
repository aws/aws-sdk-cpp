/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyGroupList.h>
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
  class ListKeyGroups2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListKeyGroups2020_05_31Result();
    AWS_CLOUDFRONT_API ListKeyGroups2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListKeyGroups2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of key groups.</p>
     */
    inline const KeyGroupList& GetKeyGroupList() const{ return m_keyGroupList; }

    /**
     * <p>A list of key groups.</p>
     */
    inline void SetKeyGroupList(const KeyGroupList& value) { m_keyGroupList = value; }

    /**
     * <p>A list of key groups.</p>
     */
    inline void SetKeyGroupList(KeyGroupList&& value) { m_keyGroupList = std::move(value); }

    /**
     * <p>A list of key groups.</p>
     */
    inline ListKeyGroups2020_05_31Result& WithKeyGroupList(const KeyGroupList& value) { SetKeyGroupList(value); return *this;}

    /**
     * <p>A list of key groups.</p>
     */
    inline ListKeyGroups2020_05_31Result& WithKeyGroupList(KeyGroupList&& value) { SetKeyGroupList(std::move(value)); return *this;}

  private:

    KeyGroupList m_keyGroupList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
