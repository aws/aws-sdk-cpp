/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RAM
{
namespace Model
{
  class AWS_RAM_API EnableSharingWithAwsOrganizationResult
  {
  public:
    EnableSharingWithAwsOrganizationResult();
    EnableSharingWithAwsOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EnableSharingWithAwsOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the request succeeded.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>Indicates whether the request succeeded.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>Indicates whether the request succeeded.</p>
     */
    inline EnableSharingWithAwsOrganizationResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}

  private:

    bool m_returnValue;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
