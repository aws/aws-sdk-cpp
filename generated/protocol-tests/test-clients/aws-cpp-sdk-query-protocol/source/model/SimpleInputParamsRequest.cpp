/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/SimpleInputParamsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

SimpleInputParamsRequest::SimpleInputParamsRequest() : 
    m_fooHasBeenSet(false),
    m_barHasBeenSet(false),
    m_baz(false),
    m_bazHasBeenSet(false),
    m_bam(0),
    m_bamHasBeenSet(false),
    m_floatValue(0.0),
    m_floatValueHasBeenSet(false),
    m_boo(0.0),
    m_booHasBeenSet(false),
    m_quxHasBeenSet(false),
    m_fooEnum(FooEnum::NOT_SET),
    m_fooEnumHasBeenSet(false),
    m_integerEnum(0),
    m_integerEnumHasBeenSet(false)
{
}

Aws::String SimpleInputParamsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SimpleInputParams&";
  if(m_fooHasBeenSet)
  {
    ss << "Foo=" << StringUtils::URLEncode(m_foo.c_str()) << "&";
  }

  if(m_barHasBeenSet)
  {
    ss << "Bar=" << StringUtils::URLEncode(m_bar.c_str()) << "&";
  }

  if(m_bazHasBeenSet)
  {
    ss << "Baz=" << std::boolalpha << m_baz << "&";
  }

  if(m_bamHasBeenSet)
  {
    ss << "Bam=" << m_bam << "&";
  }

  if(m_floatValueHasBeenSet)
  {
    ss << "FloatValue=" << m_floatValue << "&";
  }

  if(m_booHasBeenSet)
  {
    ss << "Boo=" << StringUtils::URLEncode(m_boo) << "&";
  }

  if(m_quxHasBeenSet)
  {
    ss << "Qux=" << HashingUtils::Base64Encode(m_qux) << "&";
  }

  if(m_fooEnumHasBeenSet)
  {
    ss << "FooEnum=" << FooEnumMapper::GetNameForFooEnum(m_fooEnum) << "&";
  }

  if(m_integerEnumHasBeenSet)
  {
    ss << "IntegerEnum=" << m_integerEnum << "&";
  }

  ss << "Version=2020-01-08";
  return ss.str();
}


void  SimpleInputParamsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
