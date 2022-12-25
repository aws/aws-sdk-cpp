/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace ManagedBlockchain
{
namespace Model
{
  class CreateAccessorResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult();
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API CreateAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetAccessorId() const{ return m_accessorId; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(const Aws::String& value) { m_accessorId = value; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(Aws::String&& value) { m_accessorId = std::move(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(const char* value) { m_accessorId.assign(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline CreateAccessorResult& WithAccessorId(const Aws::String& value) { SetAccessorId(value); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline CreateAccessorResult& WithAccessorId(Aws::String&& value) { SetAccessorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline CreateAccessorResult& WithAccessorId(const char* value) { SetAccessorId(value); return *this;}


    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline const Aws::String& GetBillingToken() const{ return m_billingToken; }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline void SetBillingToken(const Aws::String& value) { m_billingToken = value; }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline void SetBillingToken(Aws::String&& value) { m_billingToken = std::move(value); }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline void SetBillingToken(const char* value) { m_billingToken.assign(value); }

    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline CreateAccessorResult& WithBillingToken(const Aws::String& value) { SetBillingToken(value); return *this;}

    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline CreateAccessorResult& WithBillingToken(Aws::String&& value) { SetBillingToken(std::move(value)); return *this;}

    /**
     * <p>The billing token is a property of the Accessor. Use this token to make
     * Ethereum API calls to your Ethereum node. The billing token is used to track
     * your accessor object for billing Ethereum API requests made to your Ethereum
     * nodes.</p>
     */
    inline CreateAccessorResult& WithBillingToken(const char* value) { SetBillingToken(value); return *this;}

  private:

    Aws::String m_accessorId;

    Aws::String m_billingToken;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
