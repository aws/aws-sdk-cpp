﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10EndpointRules.h>
#include <aws/core/utils/memory/stl/AWSArray.h>

namespace Aws
{
namespace QueryCompatibleJSONRPC10
{
const size_t QueryCompatibleJSONRPC10EndpointRules::RulesBlobStrLen = 672;
const size_t QueryCompatibleJSONRPC10EndpointRules::RulesBlobSize = 673;

using RulesBlobT = Aws::Array<const char, QueryCompatibleJSONRPC10EndpointRules::RulesBlobSize>;
static constexpr RulesBlobT RulesBlob = {{
'{','"','v','e','r','s','i','o','n','"',':','"','1','.','0','"',',','"','p','a','r','a','m','e','t',
'e','r','s','"',':','{','"','R','e','g','i','o','n','"',':','{','"','b','u','i','l','t','I','n','"',
':','"','A','W','S',':',':','R','e','g','i','o','n','"',',','"','r','e','q','u','i','r','e','d','"',
':','t','r','u','e',',','"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','T','h',
'e',' ','A','W','S',' ','r','e','g','i','o','n',' ','u','s','e','d',' ','t','o',' ','d','i','s','p',
'a','t','c','h',' ','t','h','e',' ','r','e','q','u','e','s','t',',',' ','i','f',' ','t','h','e',' ',
'e','n','d','p','o','i','n','t',' ','i','s',' ','n','o','t',' ','s','p','e','c','i','f','i','e','d',
'.','"',',','"','t','y','p','e','"',':','"','S','t','r','i','n','g','"','}',',','"','E','n','d','p',
'o','i','n','t','"',':','{','"','b','u','i','l','t','I','n','"',':','"','S','D','K',':',':','E','n',
'd','p','o','i','n','t','"',',','"','r','e','q','u','i','r','e','d','"',':','f','a','l','s','e',',',
'"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','O','v','e','r','r','i','d','e',
' ','t','h','e',' ','e','n','d','p','o','i','n','t',' ','u','s','e','d',' ','t','o',' ','s','e','n',
'd',' ','t','h','i','s',' ','r','e','q','u','e','s','t','"',',','"','t','y','p','e','"',':','"','S',
't','r','i','n','g','"','}','}',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i',
't','i','o','n','s','"',':','[','{','"','f','n','"',':','"','i','s','S','e','t','"',',','"','a','r',
'g','v','"',':','[','{','"','r','e','f','"',':','"','E','n','d','p','o','i','n','t','"','}',']','}',
']',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"',',','"','e','n','d','p',
'o','i','n','t','"',':','{','"','u','r','l','"',':','{','"','r','e','f','"',':','"','E','n','d','p',
'o','i','n','t','"','}',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"','h',
'e','a','d','e','r','s','"',':','{','}','}','}',',','{','"','c','o','n','d','i','t','i','o','n','s',
'"',':','[','{','"','f','n','"',':','"','a','w','s','.','p','a','r','t','i','t','i','o','n','"',',',
'"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"','}',']',
',','"','a','s','s','i','g','n','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s','u','l',
't','"','}',']',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"',',','"','e',
'n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',':','"','h','t','t','p',':','/','/','l',
'o','c','a','l','h','o','s','t',':','1','9','9','4','"',',','"','p','r','o','p','e','r','t','i','e',
's','"',':','{','}',',','"','h','e','a','d','e','r','s','"',':','{','}','}','}',']','}','\0'
}};

const char* QueryCompatibleJSONRPC10EndpointRules::GetRulesBlob()
{
    return RulesBlob.data();
}

} // namespace QueryCompatibleJSONRPC10
} // namespace Aws
