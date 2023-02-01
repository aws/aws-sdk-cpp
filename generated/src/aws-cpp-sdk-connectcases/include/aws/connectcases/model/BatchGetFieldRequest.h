/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldIdentifier.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class BatchGetFieldRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API BatchGetFieldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetField"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline BatchGetFieldRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline BatchGetFieldRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline BatchGetFieldRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline const Aws::Vector<FieldIdentifier>& GetFields() const{ return m_fields; }

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline void SetFields(const Aws::Vector<FieldIdentifier>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline void SetFields(Aws::Vector<FieldIdentifier>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline BatchGetFieldRequest& WithFields(const Aws::Vector<FieldIdentifier>& value) { SetFields(value); return *this;}

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline BatchGetFieldRequest& WithFields(Aws::Vector<FieldIdentifier>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline BatchGetFieldRequest& AddFields(const FieldIdentifier& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>A list of unique field identifiers. </p>
     */
    inline BatchGetFieldRequest& AddFields(FieldIdentifier&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldIdentifier> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
