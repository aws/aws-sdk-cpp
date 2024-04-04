/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{
  enum class X12TransactionSet
  {
    NOT_SET,
    X12_110,
    X12_180,
    X12_204,
    X12_210,
    X12_211,
    X12_214,
    X12_215,
    X12_259,
    X12_260,
    X12_266,
    X12_269,
    X12_270,
    X12_271,
    X12_274,
    X12_275,
    X12_276,
    X12_277,
    X12_278,
    X12_310,
    X12_315,
    X12_322,
    X12_404,
    X12_410,
    X12_417,
    X12_421,
    X12_426,
    X12_810,
    X12_820,
    X12_824,
    X12_830,
    X12_832,
    X12_834,
    X12_835,
    X12_837,
    X12_844,
    X12_846,
    X12_849,
    X12_850,
    X12_852,
    X12_855,
    X12_856,
    X12_860,
    X12_861,
    X12_864,
    X12_865,
    X12_869,
    X12_870,
    X12_940,
    X12_945,
    X12_990,
    X12_997,
    X12_999,
    X12_270_X279,
    X12_271_X279,
    X12_275_X210,
    X12_275_X211,
    X12_276_X212,
    X12_277_X212,
    X12_277_X214,
    X12_277_X364,
    X12_278_X217,
    X12_820_X218,
    X12_820_X306,
    X12_824_X186,
    X12_834_X220,
    X12_834_X307,
    X12_834_X318,
    X12_835_X221,
    X12_837_X222,
    X12_837_X223,
    X12_837_X224,
    X12_837_X291,
    X12_837_X292,
    X12_837_X298,
    X12_999_X231
  };

namespace X12TransactionSetMapper
{
AWS_B2BI_API X12TransactionSet GetX12TransactionSetForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12TransactionSet(X12TransactionSet value);
} // namespace X12TransactionSetMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
