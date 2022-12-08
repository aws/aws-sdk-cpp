/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class ListDomainsRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API ListDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomains"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The maximum number of domain names you want returned. The range is 1 to 100. The
     * default setting is 100.
     */
    inline int GetMaxNumberOfDomains() const{ return m_maxNumberOfDomains; }

    /**
     * The maximum number of domain names you want returned. The range is 1 to 100. The
     * default setting is 100.
     */
    inline bool MaxNumberOfDomainsHasBeenSet() const { return m_maxNumberOfDomainsHasBeenSet; }

    /**
     * The maximum number of domain names you want returned. The range is 1 to 100. The
     * default setting is 100.
     */
    inline void SetMaxNumberOfDomains(int value) { m_maxNumberOfDomainsHasBeenSet = true; m_maxNumberOfDomains = value; }

    /**
     * The maximum number of domain names you want returned. The range is 1 to 100. The
     * default setting is 100.
     */
    inline ListDomainsRequest& WithMaxNumberOfDomains(int value) { SetMaxNumberOfDomains(value); return *this;}


    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline ListDomainsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline ListDomainsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A string informing Amazon SimpleDB where to start the next list of domain names.
     */
    inline ListDomainsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxNumberOfDomains;
    bool m_maxNumberOfDomainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
