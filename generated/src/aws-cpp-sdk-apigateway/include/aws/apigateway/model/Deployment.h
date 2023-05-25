/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/MethodSnapshot.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>An immutable representation of a RestApi resource that can be called by users
   * using Stages. A deployment must be associated with a Stage for it to be callable
   * over the Internet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_APIGATEWAY_API Deployment();
    AWS_APIGATEWAY_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline Deployment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline Deployment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline Deployment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description for the deployment resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline Deployment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline Deployment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline Deployment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline Deployment& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline Deployment& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& GetApiSummary() const{ return m_apiSummary; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline bool ApiSummaryHasBeenSet() const { return m_apiSummaryHasBeenSet; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline void SetApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary = value; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline void SetApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary = std::move(value); }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& WithApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { SetApiSummary(value); return *this;}

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& WithApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { SetApiSummary(std::move(value)); return *this;}

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& AddApiSummary(const Aws::String& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary.emplace(key, value); return *this; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& AddApiSummary(Aws::String&& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary.emplace(std::move(key), value); return *this; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& AddApiSummary(const Aws::String& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& AddApiSummary(Aws::String&& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& AddApiSummary(const char* key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A summary of the RestApi at the date and time that the deployment resource
     * was created.</p>
     */
    inline Deployment& AddApiSummary(const char* key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline Deployment& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline Deployment& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline Deployment& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>> m_apiSummary;
    bool m_apiSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
