﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action that writes data to an Amazon OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/OpenSearchAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API OpenSearchAction
  {
  public:
    OpenSearchAction();
    OpenSearchAction(Aws::Utils::Json::JsonView jsonValue);
    OpenSearchAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline OpenSearchAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline OpenSearchAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN that has access to OpenSearch.</p>
     */
    inline OpenSearchAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline OpenSearchAction& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline OpenSearchAction& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of your OpenSearch domain.</p>
     */
    inline OpenSearchAction& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline const Aws::String& GetIndex() const{ return m_index; }

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline void SetIndex(const Aws::String& value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline void SetIndex(Aws::String&& value) { m_indexHasBeenSet = true; m_index = std::move(value); }

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline void SetIndex(const char* value) { m_indexHasBeenSet = true; m_index.assign(value); }

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline OpenSearchAction& WithIndex(const Aws::String& value) { SetIndex(value); return *this;}

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline OpenSearchAction& WithIndex(Aws::String&& value) { SetIndex(std::move(value)); return *this;}

    /**
     * <p>The OpenSearch index where you want to store your data.</p>
     */
    inline OpenSearchAction& WithIndex(const char* value) { SetIndex(value); return *this;}


    /**
     * <p>The type of document you are storing.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of document you are storing.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of document you are storing.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of document you are storing.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of document you are storing.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of document you are storing.</p>
     */
    inline OpenSearchAction& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of document you are storing.</p>
     */
    inline OpenSearchAction& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of document you are storing.</p>
     */
    inline OpenSearchAction& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline OpenSearchAction& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline OpenSearchAction& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the document you are storing.</p>
     */
    inline OpenSearchAction& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_index;
    bool m_indexHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
