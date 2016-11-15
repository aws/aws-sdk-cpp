/*
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
#include <aws/cloudsearch/model/IndexField.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DefineIndexField</a></code>
   * operation. Specifies the name of the domain you want to update and the index
   * field configuration.</p>
   */
  class AWS_CLOUDSEARCH_API DefineIndexFieldRequest : public CloudSearchRequest
  {
  public:
    DefineIndexFieldRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DefineIndexFieldRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DefineIndexFieldRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
    inline DefineIndexFieldRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline const IndexField& GetIndexField() const{ return m_indexField; }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline void SetIndexField(const IndexField& value) { m_indexFieldHasBeenSet = true; m_indexField = value; }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline void SetIndexField(IndexField&& value) { m_indexFieldHasBeenSet = true; m_indexField = value; }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline DefineIndexFieldRequest& WithIndexField(const IndexField& value) { SetIndexField(value); return *this;}

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline DefineIndexFieldRequest& WithIndexField(IndexField&& value) { SetIndexField(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    IndexField m_indexField;
    bool m_indexFieldHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
