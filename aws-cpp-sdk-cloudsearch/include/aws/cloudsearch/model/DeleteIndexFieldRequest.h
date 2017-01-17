﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteIndexField</a></code>
   * operation. Specifies the name of the domain you want to update and the name of
   * the index field you want to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteIndexFieldRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DeleteIndexFieldRequest : public CloudSearchRequest
  {
  public:
    DeleteIndexFieldRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DeleteIndexFieldRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DeleteIndexFieldRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
    inline DeleteIndexFieldRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline const Aws::String& GetIndexFieldName() const{ return m_indexFieldName; }

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline void SetIndexFieldName(const Aws::String& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline void SetIndexFieldName(Aws::String&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline void SetIndexFieldName(const char* value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName.assign(value); }

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline DeleteIndexFieldRequest& WithIndexFieldName(const Aws::String& value) { SetIndexFieldName(value); return *this;}

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline DeleteIndexFieldRequest& WithIndexFieldName(Aws::String&& value) { SetIndexFieldName(value); return *this;}

    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline DeleteIndexFieldRequest& WithIndexFieldName(const char* value) { SetIndexFieldName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
