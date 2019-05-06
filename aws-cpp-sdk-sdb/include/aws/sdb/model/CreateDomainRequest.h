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
  class AWS_SIMPLEDB_API CreateDomainRequest : public SimpleDBRequest
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
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The name of the domain to create. The name can range between 3 and 255
     * characters and can contain the following characters: a-z, A-Z, 0-9, '_', '-',
     * and '.'.
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
