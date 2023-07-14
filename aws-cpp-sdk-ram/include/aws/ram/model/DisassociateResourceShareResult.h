﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociation.h>
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
namespace RAM
{
namespace Model
{
  class AWS_RAM_API DisassociateResourceShareResult
  {
  public:
    DisassociateResourceShareResult();
    DisassociateResourceShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateResourceShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline const Aws::Vector<ResourceShareAssociation>& GetResourceShareAssociations() const{ return m_resourceShareAssociations; }

    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline void SetResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { m_resourceShareAssociations = value; }

    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline void SetResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { m_resourceShareAssociations = std::move(value); }

    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline DisassociateResourceShareResult& WithResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { SetResourceShareAssociations(value); return *this;}

    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline DisassociateResourceShareResult& WithResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { SetResourceShareAssociations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline DisassociateResourceShareResult& AddResourceShareAssociations(const ResourceShareAssociation& value) { m_resourceShareAssociations.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain information about the updated associations
     * for this resource share.</p>
     */
    inline DisassociateResourceShareResult& AddResourceShareAssociations(ResourceShareAssociation&& value) { m_resourceShareAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline DisassociateResourceShareResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline DisassociateResourceShareResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline DisassociateResourceShareResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::Vector<ResourceShareAssociation> m_resourceShareAssociations;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
