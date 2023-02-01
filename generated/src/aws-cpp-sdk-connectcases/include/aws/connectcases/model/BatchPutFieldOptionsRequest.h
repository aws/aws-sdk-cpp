/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldOption.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class BatchPutFieldOptionsRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API BatchPutFieldOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutFieldOptions"; }

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
    inline BatchPutFieldOptionsRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline BatchPutFieldOptionsRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline BatchPutFieldOptionsRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline BatchPutFieldOptionsRequest& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline BatchPutFieldOptionsRequest& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a field.</p>
     */
    inline BatchPutFieldOptionsRequest& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline const Aws::Vector<FieldOption>& GetOptions() const{ return m_options; }

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline void SetOptions(const Aws::Vector<FieldOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline void SetOptions(Aws::Vector<FieldOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline BatchPutFieldOptionsRequest& WithOptions(const Aws::Vector<FieldOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline BatchPutFieldOptionsRequest& WithOptions(Aws::Vector<FieldOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline BatchPutFieldOptionsRequest& AddOptions(const FieldOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline BatchPutFieldOptionsRequest& AddOptions(FieldOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::Vector<FieldOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
