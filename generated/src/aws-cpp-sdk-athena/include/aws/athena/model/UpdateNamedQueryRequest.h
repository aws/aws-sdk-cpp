﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class UpdateNamedQueryRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API UpdateNamedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNamedQuery"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (UUID) of the query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = value; }
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::move(value); }
    inline void SetNamedQueryId(const char* value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId.assign(value); }
    inline UpdateNamedQueryRequest& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}
    inline UpdateNamedQueryRequest& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}
    inline UpdateNamedQueryRequest& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateNamedQueryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateNamedQueryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateNamedQueryRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateNamedQueryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateNamedQueryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateNamedQueryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline UpdateNamedQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline UpdateNamedQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline UpdateNamedQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}
  private:

    Aws::String m_namedQueryId;
    bool m_namedQueryIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
