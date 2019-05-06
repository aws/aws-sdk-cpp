/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>CreateDomain</a></code>
   * operation. Specifies a name for the new search domain.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/CreateDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API CreateDomainRequest : public CloudSearchRequest
  {
  public:
    CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A name for the domain you are creating. Allowed characters are a-z
     * (lower-case letters), 0-9, and hyphen (-). Domain names must start with a letter
     * or number and be at least 3 and no more than 28 characters long.</p>
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
