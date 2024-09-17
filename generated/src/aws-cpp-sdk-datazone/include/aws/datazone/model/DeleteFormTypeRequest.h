/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class DeleteFormTypeRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API DeleteFormTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFormType"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type is
     * deleted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline DeleteFormTypeRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline DeleteFormTypeRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline DeleteFormTypeRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the metadata form type that is deleted.</p>
     */
    inline const Aws::String& GetFormTypeIdentifier() const{ return m_formTypeIdentifier; }
    inline bool FormTypeIdentifierHasBeenSet() const { return m_formTypeIdentifierHasBeenSet; }
    inline void SetFormTypeIdentifier(const Aws::String& value) { m_formTypeIdentifierHasBeenSet = true; m_formTypeIdentifier = value; }
    inline void SetFormTypeIdentifier(Aws::String&& value) { m_formTypeIdentifierHasBeenSet = true; m_formTypeIdentifier = std::move(value); }
    inline void SetFormTypeIdentifier(const char* value) { m_formTypeIdentifierHasBeenSet = true; m_formTypeIdentifier.assign(value); }
    inline DeleteFormTypeRequest& WithFormTypeIdentifier(const Aws::String& value) { SetFormTypeIdentifier(value); return *this;}
    inline DeleteFormTypeRequest& WithFormTypeIdentifier(Aws::String&& value) { SetFormTypeIdentifier(std::move(value)); return *this;}
    inline DeleteFormTypeRequest& WithFormTypeIdentifier(const char* value) { SetFormTypeIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_formTypeIdentifier;
    bool m_formTypeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
