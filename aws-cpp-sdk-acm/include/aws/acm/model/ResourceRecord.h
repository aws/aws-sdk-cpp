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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/RecordType.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>Contains a DNS record value that you can use to can use to validate ownership
   * or control of a domain. This is used by the <a>DescribeCertificate</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ResourceRecord">AWS
   * API Reference</a></p>
   */
  class AWS_ACM_API ResourceRecord
  {
  public:
    ResourceRecord();
    ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline ResourceRecord& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline ResourceRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the DNS record to create in your domain. This is supplied by
     * ACM.</p>
     */
    inline ResourceRecord& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline const RecordType& GetType() const{ return m_type; }

    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline void SetType(const RecordType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline void SetType(RecordType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline ResourceRecord& WithType(const RecordType& value) { SetType(value); return *this;}

    /**
     * <p>The type of DNS record. Currently this can be <code>CNAME</code>.</p>
     */
    inline ResourceRecord& WithType(RecordType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline ResourceRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline ResourceRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the CNAME record to add to your DNS database. This is supplied
     * by ACM.</p>
     */
    inline ResourceRecord& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RecordType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
