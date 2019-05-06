/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateTagOptionRequest : public ServiceCatalogRequest
  {
  public:
    UpdateTagOptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTagOption"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The TagOption identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline UpdateTagOptionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The TagOption identifier.</p>
     */
    inline UpdateTagOptionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The TagOption identifier.</p>
     */
    inline UpdateTagOptionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The updated value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The updated value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The updated value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The updated value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The updated value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The updated value.</p>
     */
    inline UpdateTagOptionRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The updated value.</p>
     */
    inline UpdateTagOptionRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The updated value.</p>
     */
    inline UpdateTagOptionRequest& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The updated active state.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>The updated active state.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>The updated active state.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>The updated active state.</p>
     */
    inline UpdateTagOptionRequest& WithActive(bool value) { SetActive(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
